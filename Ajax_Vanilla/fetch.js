const contenido = document.getElementById('contenido');

// Función para cargar el contenido de la página
function cargarContenido(ruta) {
  fetch(ruta)
    .then(respuesta => respuesta.text())
    .then(data => {contenido.innerHTML = data})
    .catch(error => console.error(error));
}

// Función para manejar los cambios en la URL
function manejarCambioDeURL() {
  const ruta = location.hash.substr(1) || '/';
  cargarContenido(`${ruta}.html`);
}

// Cargar el contenido de la página inicial
cargarContenido('landing');

// Manejar los cambios en la URL
window.addEventListener('hashchange', manejarCambioDeURL);