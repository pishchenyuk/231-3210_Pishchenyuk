FROM python:3.11-slim

# Переменные окружения
ENV PYTHONDONTWRITEBYTECODE=1
ENV PYTHONUNBUFFERED=1

WORKDIR /app

# Устанавливаем зависимости
COPY requirements.txt /app/
RUN pip install --no-cache-dir -r requirements.txt

# Копируем проект
COPY . /app/

# Запускаем через gunicorn
CMD ["gunicorn", "lab1.wsgi:application", "--bind", "0.0.0.0:8000"]
